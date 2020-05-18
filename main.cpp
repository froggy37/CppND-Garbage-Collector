#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int> p = new int(19);
    auto * k = new int(17);
    Pointer<int> d(k);
    Pointer<int, 5> z;
    z = new int[5];
    p = new int(15);
    z = new int[19];
    p = new int (7);
    z.showlist();
    p.showlist();
    d.showlist();
    return 0;
}
