struct Blk {
    int f00;
    int f04;
    int f08;
    float f0C;
};

extern struct Blk D_00197050;
extern char D_00197060[];
extern char D_00197098[];

void func_022B08(void *);
void func_016CD8(void *);
void func_0170D0(void *, int);
void func_016CB0(void *, int);

void func_017180(char *p, int a1)
{
    if (a1 != 0xFFFF)
        return;

    if (p != 0) {
        D_00197050.f0C = 1.0f;
        D_00197050.f00 = 0;
        D_00197050.f08 = 0;
        D_00197050.f04 = 0;
        func_022B08(D_00197060);
        func_016CD8(D_00197098);
    } else {
        func_0170D0(D_00197098, 2);
        func_016CB0(D_00197060, 2);
    }
}
