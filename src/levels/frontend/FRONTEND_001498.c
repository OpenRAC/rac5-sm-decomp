/* FRONTEND:0x001498 -- shuts down the movie player: closes the handle, resets the playback state and runs the end callback when one is set; returns the helper's result. */
extern void *D_00027E18;
extern int D_00027E1C;
extern int D_00027D0C;
extern int D_00027D10;
extern unsigned char D_00027D77;
extern char D_00027D60;
extern char D_00027D61;
extern int D_00027D6C;
extern int D_00027D68;
extern void (*D_00027DF8)(int);
extern int D_00027E00;

extern int func_000718(void *handle);
extern void BinkClose(void *handle);

int func_001498(void)
{
    int r;

    r = func_000718(D_00027E18);
    BinkClose(D_00027E18);
    D_00027E18 = 0;
    D_00027E1C = 0;
    D_00027D0C = 0;
    if (D_00027D77 == 0) {
        D_00027D10 = 0;
    }
    D_00027D60 = 0;
    D_00027D61 = 0;
    D_00027D68 = -1;
    D_00027D6C = -1;
    if (D_00027DF8 != 0) {
        D_00027DF8(D_00027E00);
    }
    return r;
}
