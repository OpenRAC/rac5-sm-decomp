/* LEVEL_15:0x134718 -- scales a table entry by the caller's factor and
   writes it into the object the global index points at. */
typedef struct {
    void *p;
    int pad[0x4E];
    int f_13C;
} S;

extern S D_002F4F88;
extern char D_00171AF0[];

void func_134718(void *a0, int a1, float f12)
{
    int n = D_002F4F88.f_13C;

    if (n != -1) {
        int off = n * 0xC;
        char *table = D_00171AF0;
        void *p = D_002F4F88.p;
        void *t = *(void **)((char *)p + 0x48);
        char *e = table + off;
        *(float *)((char *)t + 0x8) = f12 * *(float *)e;
    }
}
