/* LEVEL_15:0x0F62C8 -- refreshes each non-null entry of a pointer list into a fixed table; returns 1 if no entry was null. */

extern char D_002A8B5C[];

void func_12F840(void *e, void *v);
void func_12F898(void *e, void *v, float f);
void func_0F6120(void *tab, void *v);

int func_0F62C8(void **arr)
{
    int flag;
    int i;

    flag = 0;
    for (i = 0; i < 1; i++) {
        if (arr[i] == 0) {
            flag = 1;
        } else {
            func_12F840(D_002A8B5C + i * 12, arr[i]);
            func_12F898(D_002A8B5C + i * 12, arr[i], 2.0f);
        }
    }
    func_0F6120(D_002A8B5C, arr[0]);
    return flag == 0;
}
