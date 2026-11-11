/* LEVEL_19:0x111F08 -- a twenty-four-byte block is copied in from a global
   pointer, the game asks what to do with it, and the block is copied back
   out.  The block is six words (four-byte alignment): three eight-byte
   pieces moved unaligned (ldl/ldr, sdl/sdr). */
typedef struct {
    int i[6];
} Block24;

extern void *D_001B5D24;
extern int D_001B5D30;
extern int D_001B5D2C;

int func_0FAD28(int a);
void func_0FAC18(int a, int b, int c);

void func_0111F08(void)
{
    Block24 block = *(Block24 *)D_001B5D24;
    int result;
    int failed = 0;

    result = func_0FAD28(D_001B5D30);
    switch (result) {
    case 3:
        func_0FAC18(D_001B5D30, block.i[2], block.i[5]);
        D_001B5D2C = 4;
        break;
    case 4:
        failed = 1;
        break;
    }
    if (failed)
        block.i[0] = -1;
    *(Block24 *)D_001B5D24 = block;
}
