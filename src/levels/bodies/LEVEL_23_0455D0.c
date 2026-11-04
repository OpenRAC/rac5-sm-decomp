extern float D_00206048[];
extern unsigned char D_00206088[];

void func_0455D0(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_00206048[n] = D_00206048[n - 1];
        D_00206088[n] = D_00206088[n - 1];
    }
    arr[index] = v;
    D_00206048[index] = f;
    D_00206088[index] = b;
}
