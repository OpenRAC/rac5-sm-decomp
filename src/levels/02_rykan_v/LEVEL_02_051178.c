extern float D_002500D8[];
extern unsigned char D_00250118[];

void func_051178(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_002500D8[n] = D_002500D8[n - 1];
        D_00250118[n] = D_00250118[n - 1];
    }
    arr[index] = v;
    D_002500D8[index] = f;
    D_00250118[index] = b;
}
