#include <iostream>

class vector{
private:
	int sz;
	double* elem;

public:
	vector(int s) : sz{s}, elem{new double[sz]}
	{
		for(int i=0; i<s;++i)
			elem[i] = 0;
	}

	vector(std::initializer_list<double> lst) 
		: sz{ static_cast<int>(lst.size()) }, elem {new double[sz]}
	{
		std::copy(lst.begin(), lst.end(), elem);
	}
	
	//copy constructor
	vector(const vector& arg)
		: sz { arg.sz }, elem{ new double[arg.sz]}
	{
		std::copy(arg.elem, arg.elem+sz, elem);
	}
	
	//copy assignment operator
	vector& operator=(const vector& arg)
	{
		sz = arg.sz;
		double *p = new double[arg.sz];
		std::copy(arg.elem, arg.elem+sz, p);
		delete[] elem;
		elem = p;
		return *this;
	}
	
	//move constructor 
	vector(vector&& arg)
		:sz{ arg.sz }, elem{ arg.elem }
	{
		arg.sz = 0;
		arg.elem = nullptr;
	}
	
	//move assignment operator 
	vecotr& operator=(vector&& arg)
	{
		delete[] elem;
		elem = arg.elem;
		sz = arg.sz;
		arg.elem = nullptr;
		arg.sz = 0;
		return *this;

	}
	~vector()
	{
		delete[] elem;
	}

	int size() const { return sz; }
	double get(int n) const { return elem[n]; }
	void set(int n, double v) { elem[n]=v;}
};

int main()
{
	vector v{5};

	for(int i=0;i<v.size();++i)
	{
		v.set(i, 1.1*i);
		std::cout<<"v[" << i <<"] = " << v.get(i) << std::endl;
	}

	return 0;
}
