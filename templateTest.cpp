#include <iostream>

template<typename T>
T const & max( T const & x, T const & y )
{
	return (x >= y? x : y);
}

int	const & maxx( int const & x, int const & y )
{
	return (x >= y? x : y);
}

int		ret(int i)
{
	std::cout << "hi";
	return i;
}

int main(void)
{
	// 실제 함수 vs 템플릿 함수
	std::cout << std::max( 1, 2 ) << std::endl;	
	std::cout << max( 1, 2 ) << std::endl;
	std::cout << maxx(ret(1), ret(2)) << std::endl;
}
