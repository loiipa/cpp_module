#include <iostream>

template< typename T >
T const & max( T const & x, T const & y ) {
	return ( x >= y? x : y );
}

int foo( int x ) {
	std::cout << "Long computing time" << std::endl;
	return x;
}

int main( void ) {
	int a = 21;
	int b = 42;
		
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>( a, b ) << std::endl;							//Explicit 명백한, 노골적인
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max( a, b ) << std::endl;									//Implicit 내포된, 암시의

	float c = -1.7f;
	float d = 4.2f;

	std::cout << "Max of " << c << " and " << c << " is ";
	std::cout << max<float>( c, d ) << std::endl;
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max( c, d ) << std::endl;

	char e = 'a';
	char f = 'z';

	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<float>( e, f ) << std::endl;
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max( e, f ) << std::endl;

	int ret = max<int>( foo(a), foo(b) );
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;

	return 0;
}
