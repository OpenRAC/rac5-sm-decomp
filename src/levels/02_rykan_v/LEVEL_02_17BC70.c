/* LEVEL_02:0x17BC70 -- advances a timer, and when it has passed a threshold, selects a slot. */

extern int func_17BC18(unsigned char *o);

struct Pool {
    unsigned char *slot[4];
    float limit;
};

void func_17BC70(unsigned char *a0)
{
    struct Pool *s1;
    int a5;
    unsigned char *e;

    s1 = *(struct Pool **)(a0 + 0x54);
    if ((*(float *)(a0 + 0x70))++ > s1->limit) {
        a5 = func_17BC18(a0);
        if (a5 != 0xFF) {
            e = s1->slot[a5];
            e[0x45] = 3;
            a0[0x46] = (unsigned char)a5;
        }
        *(unsigned int *)(a0 + 0x70) = 0;
    }
}
