/* LEVEL_01.REL:0x065B00, bounded 176-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +52. Not linked into the accepted
 * gate or counted.
 * Reopen: One instruction is swapped in the jal delay slot: the retail puts mov.s f13,f20 there and the a1 constant before it. Reopen with an argument form that emits a1 before the mov.s.
 */
extern int func_04DA70(float a, float b, int p, int c, int d, int e);

void func_065B00(int self, int val)
{
    if (func_04DA70(0.1f, 0.0f, self, 0x39, 0, 1) != 0)
        *(float *)(*(int *)(*(int *)(self + 0x59c) + 0x48) + 8) = 2.0f;
    *(int *)(self + 0xb8c) = val;
    *(char *)(self + 0xbc8) = 0;
    *(char *)(self + 0xbc9) = 0;
    *(int *)(self + 0xb78) = 0;
    *(short *)(self + 0x108) = 1;
    *(short *)(self + 0x10a) = 1;
    *(int *)(*(int *)(*(int *)(self + 0x5a4) + 0x48) + 0xdc) = 0;
    *(int *)(*(int *)(*(int *)(self + 0x5a4) + 0x48) + 0xe4) = self;
    *(float *)(self + 0xb94) = 0.0f;
    *(float *)(self + 0xb90) = 0.0f;
}
