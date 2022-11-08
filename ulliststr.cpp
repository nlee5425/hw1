#include <cstddef>
#include <stdexcept>
#include "ulliststr.h"

ULListStr::ULListStr()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

ULListStr::~ULListStr()
{
  clear();
}

bool ULListStr::empty() const
{
  return size_ == 0;
}

size_t ULListStr::size() const
{
  return size_;
}

// WRITE YOUR CODE HERE

/**
   * Adds a new value to the back of the list
   *   - MUST RUN in O(1)
   */
void ULListStr::push_back(const std::string& val){
	if ( size_ == 0){ //if empty in the beginning
		Item* temp = new Item;
		head_ = temp;
		tail_ = temp;
		temp = head_;
		temp->val[temp->last] = val;
		++temp->last;
		++size_;
	}
	else if ( tail_->last == 10 ) {
		Item* temp = new Item; //temp first and last equal 0
		temp->val[temp->last] = val;
		++temp->last;//the last will be iterated forward after val is set
		temp->prev = tail_;
		tail_->next = temp; //sets temp at back
		tail_ = tail_->next; //sets new tail after temp
		++size_;
	}
	else {
		tail_->val[tail_->last] = val;
		tail_->last++;
		++size_;	
	}
}

/**
   * Adds a new value to the front of the list.
   * If there is room before the 'first' value in
   * the head node add it there, otherwise, 
   * allocate a new head node.
   *   - MUST RUN in O(1)
   */
void ULListStr::push_front(const std::string& val){
	if ( size_ == 0 ) { //if empty
		Item* temp = new Item;
		head_ = temp;
		tail_ = temp;
		temp = head_;
		temp->first = 10; //last and first = 10 because it makes list congruent
		temp->last = 10;
		temp->first--;
		temp->val[temp->first] = val;
		++size_;
	}
	else if ( head_->first == 0 ) {
		Item* temp = new Item;
		temp->first = 10; //last and first = 10 because it makes list congruent
		temp->last = 10;
		temp->first--;	
		temp->val[temp->first] = val;
		temp->next = head_;
		head_->prev = temp;
		head_ = head_->prev;
		++size_;
	}
	else{
		head_->first--;
		head_->val[head_->first] = val;
		++size_;
	}
}


/**
   * Removes a value from the back of the list
   *   - MUST RUN in O(1)
   */
void ULListStr::pop_back(){
  if ( empty() ) { //if list is empty
		return;
  }
  else if (tail_->last == 1 && tail_->first == 0){ //if list has one item
		tail_ = tail_->prev; //new head becomes previous
		size_--;
	}
	else{ //if its not empty 
		tail_->last--;
		size_--;
	}
}

/**
   * Removes a value from the front of the list
   *   - MUST RUN in O(1)
   */
void ULListStr::pop_front(){
  if ( empty() ) { //if list is empty
		return;
  }
  else if (head_->first == 9 && head_->last == 10){ //if list has one item
		head_ = head_->next; //new head becomes previous
		size_--;
	}
	else{ //if its not empty 
		head_->first++;
		size_--;
	}
}

/**
   * Returns a const reference to the back element
   *   - MUST RUN in O(1)
   */
std::string const & ULListStr::back() const{
	Item* temp = tail_; //the last value is pointing to nothing so must go down 1
	temp->last--;
	return temp->val[temp->last];

}

/**
   * Returns a const reference to the front element
   *   - MUST RUN in O(1)
   */
std::string const & ULListStr::front() const{
	return head_->val[head_->first];
}

/** 
   * Returns a pointer to the item at index, loc,
   *  if loc is valid and NULL otherwise
   *   - MUST RUN in O(n) 
   */
std::string* ULListStr::getValAtLoc(size_t loc) const{
	//go from node one by one
	//go to head next
	//check first and last
	//using & syntax for return
	//starts from head and goes to tail 
	//loc is the element of all the nodes
	Item* temp = head_;
	int newloc = loc + 1;
	int loc2 = loc;
	++loc2;
	int currloc = 0;
	int beg = temp->first;
	int end = temp->last;
	int totsize = size_;
	while ( currloc != newloc ) {
		int tot = -1 * (beg - end);
		if ( loc2 > tot ) { //if loc is greater than tot
			totsize -= tot;
			currloc += tot;
			loc2 -= tot;
			temp = temp->next; 
			beg = temp->first;
			end = temp->last;
		}
		else { //if loc is less or equal to tot
			++beg;
			++currloc;
			loc2--;	
		}
	}
	--beg;
	return &(temp->val[beg]);
}
void ULListStr::set(size_t loc, const std::string& val)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  *ptr = val;
}

std::string& ULListStr::get(size_t loc)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::get(size_t loc) const
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

void ULListStr::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}
