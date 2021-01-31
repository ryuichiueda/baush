#include <iostream>
#include <vector>
using namespace std;

class Element
{
public:
	virtual bool parse(string &buffer) = 0;
private:
	vector<Element *> _elements; // element tree
};

class Token : public Element
{
public: 
	virtual bool parse(string &buffer){
		return true;
	}
};

int main(int argc, char const* argv[])
{
	cout << "$ " << flush;
	
	string line;
	cin >> line;

	cout << line << endl;

	return 0;
}
