/* LEVEL_01:0x0B6DE8 -- runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_001F3FAC;

void func_0B6B90(int i);
void func_0B69D0(int i);
void func_0B70B8(int i, int v);
void func_0B7500(int i);
void func_0B7880(int i);
void func_0B7FA8(int i);
void func_0B8E68(int i);
void func_0B6D80(int i);

void func_0B6DE8(void)
{
    int i;

    i = 0;
    do {
        func_0B6B90(i);
        func_0B69D0(i);
        func_0B70B8(i, *(int *)((char *)D_001F3FAC + 0x1C68));
        func_0B7500(i);
        func_0B7880(i);
        func_0B7FA8(i);
        func_0B8E68(i);
        func_0B6D80(i);
        i = i + 1;
    } while (i == 0);
}
