extern float D_00253A48[];
extern unsigned char D_00253A88[];

void func_04A4B0(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_00253A48[n] = D_00253A48[n - 1];
        D_00253A88[n] = D_00253A88[n - 1];
    }
    arr[index] = v;
    D_00253A48[index] = f;
    D_00253A88[index] = b;
}
