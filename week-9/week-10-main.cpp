#include"pointerWrapper.h"

int main() {
	{

			try
		{	
				std::string err = "error";
			throw err;
		}
		catch (std::string e)
		{
			std::cout << "Exception caught: " << e << std::endl;
		}

		pointerWrapper p(1);
		p.print();
	}
	std::cout << std::endl << "Doing other stuff in the program..." << std::endl << std::endl;
	pointerWrapper pW(64);
	pW.print();
	return 0;
}