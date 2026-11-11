/* LEVEL_08:0x0900B8 -- when a helper returns nonzero, stores two byte arguments into a global record and stores two helper float results into it. */
extern int func_0901A8(int mask);
extern float func_0901C8(int a0);
extern char *D_0023F11C;

void func_0900B8(int a0, int a1, int a2)
{
    if (func_0901A8(a0) == 0) {
        return;
    }
    *(unsigned char *)(D_0023F11C + 0x10C) = (unsigned char)a1;
    *(unsigned char *)(D_0023F11C + 0x10D) = (unsigned char)a2;
    *(float *)(D_0023F11C + 0x134) = func_0901C8(*(unsigned char *)(D_0023F11C + 0x10C));
    *(float *)(D_0023F11C + 0x138) = func_0901C8(*(unsigned char *)(D_0023F11C + 0x10D));
}
