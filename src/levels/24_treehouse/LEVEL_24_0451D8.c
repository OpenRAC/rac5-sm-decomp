extern float D_00204AC8[];
extern unsigned char D_00204B08[];

void func_0451D8(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_00204AC8[n] = D_00204AC8[n - 1];
        D_00204B08[n] = D_00204B08[n - 1];
    }
    arr[index] = v;
    D_00204AC8[index] = f;
    D_00204B08[index] = b;
}
