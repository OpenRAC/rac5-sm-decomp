typedef struct {
    char pad[8];
    int f08;
} H;

extern H *D_001DA1A8;

extern void func_103598(void *a0, int a1, int a2, void *a3, float a4);

void func_103558(int a0, int a1, int a2)
{
    char buf[16];

    func_103598(a2 ? (void *)a2 : (void *)buf, a0, D_001DA1A8->f08, (void *)a1,
                *(float *)(a1 + 0xC));
}
