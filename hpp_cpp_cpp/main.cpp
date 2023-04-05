#include <iostream>
#include "smart_array.h"


int main() {
    SmartArray ar;
	ar.set_el(111);
	ar.set_el(118);
	ar.print();
	ar.dell_el();
	ar.set_el(112);
	ar.print();
	ar.set_el(222);
	ar.set_el(2992);
	ar.set_el(221);
	ar.set_el(222);
	ar.set_el(222);
	ar.print();

    return 0;
}
