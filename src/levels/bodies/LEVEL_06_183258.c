/* LEVEL_06:0x183258 -- builds a small local record, runs two helpers on it, and passes the result on when it is not -1. */
void func_183080(void *a0, int a1);
int func_08F8B0(void *p);
void func_1830D8(int r, void *obj, int a1, float f);

void func_183258(void *a0, int a1, int a2, float f12)
{
    char local[16];
    int r;

    func_183080(local, a2);
    local[10] = local[10] | 1;
    r = func_08F8B0(local);
    if (r != -1) {
        func_1830D8(r, a0, a1, f12);
    }
}
