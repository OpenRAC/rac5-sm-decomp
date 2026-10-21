/* LEVEL_15:0x0F39C0 -- a twenty-four-byte block is copied in from a global
   pointer, the game asks what to do with it, and the block is copied back
   out.  The block is six words (four-byte alignment): three eight-byte
   pieces moved unaligned (ldl/ldr, sdl/sdr). */
typedef struct {
    int i[6];
} Block24;

extern void *D_0015B9F4;
extern int D_0015BA00;
extern int D_0015B9FC;

int func_0DE770(int a);
void func_0DE660(int a, int b, int c);

void func_00F39C0(void)
{
    Block24 block = *(Block24 *)D_0015B9F4;
    int result;
    int failed = 0;

    result = func_0DE770(D_0015BA00);
    switch (result) {
    case 3:
        func_0DE660(D_0015BA00, block.i[2], block.i[5]);
        D_0015B9FC = 4;
        break;
    case 4:
        failed = 1;
        break;
    }
    if (failed)
        block.i[0] = -1;
    *(Block24 *)D_0015B9F4 = block;
}
