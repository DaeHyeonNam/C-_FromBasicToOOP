#ifndef _INT_MADE
#define _INT_MADE

class int_
{
	private:
		int val;
	public:
		int_(int val=0)
		{
			this->val = val;
		}
		
		//prefix
		int operator++()
		{
			++this->val;
			return this->val;
		}
		//postfix
		int operator++(int)
		{
			int temp = val;
			++val;
			return temp;
		}
	
		//conversion operator -> chagne 'int_' class to 'int' 
		operator int() const
		{
			return this->val;
		}
		
		// = operator
		int_& operator=(const int a)
		{
			this->val = a;
			
			return *this;
		}
		int_& operator=(const int_& a)
		{
			this->val = a;
			
			return *this;
		}
		
		int_ operator+(const int_& a)
		{
			int_ temp(this->val+ a.val);
			return temp;
		}
		
		void operator+=(const int_& a)
		{
			this->val+=a.val;
		}
		
};
#endif 
