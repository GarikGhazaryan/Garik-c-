#include <iostream>
#include "smart_array.hpp"


int main() {
    SmartArray ar;
	ar.set_el(1);
	ar.set_el(2);
	ar.set_el(3);
	ar.set_el(4);
	ar.set_el(5);
	ar.set_el(6);
	ar.set_el(7);
	ar.set_el(8);
	ar.set_el(9);
	ar.set_el(10);
	ar.insert(0,123);
	ar.print();
	ar.remove(125);
	ar.remove(5);
	ar.remove(8);
	ar.print();

    return 0;
}
