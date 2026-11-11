/* LEVEL_06:0x12B1C8 -- a twenty-four-byte block is copied in from a global
   pointer, the game asks what to do with it, and the block is copied back
   out.  The block is six words (four-byte alignment): three eight-byte
   pieces moved unaligned (ldl/ldr, sdl/sdr). */
typedef struct {
    int i[6];
} Block24;

extern void *D_001F5C94;
extern int D_001F5CA0;
extern int D_001F5C9C;

int func_1109E0(int a);
void func_1108D0(int a, int b, int c);

void func_012B1C8(void)
{
    Block24 block = *(Block24 *)D_001F5C94;
    int result;
    int failed = 0;

    result = func_1109E0(D_001F5CA0);
    switch (result) {
    case 3:
        func_1108D0(D_001F5CA0, block.i[2], block.i[5]);
        D_001F5C9C = 4;
        break;
    case 4:
        failed = 1;
        break;
    }
    if (failed)
        block.i[0] = -1;
    *(Block24 *)D_001F5C94 = block;
}
