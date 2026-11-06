/* LEVEL_02.REL:0x059F40, bounded 196-byte candidate.
 * Isolated pinned C object: 196 bytes; first linked
 * difference at body byte +44. Not linked into the accepted
 * gate or counted.
 * Reopen: slti/movn and the float constants are exact; the f2..f5 register permutation remains. Reopen by changing the float declaration order.
 */
extern float D_00203F1C;

void func_00059F40(char *base)
{
    float *pfVar4;
    float *pfVar3;
    float fVar5;
    float f2;
    float f3;
    float f4;
    float f5;
    int aiStack[4];
    int *piVar1;
    int iVar2;

    aiStack[1] = 2;
    pfVar4 = (float *)(base + 0x23c);
    pfVar3 = (float *)(base + 0x244);
    f2 = *(float *)(base + 0x250);
    f3 = *(float *)(base + 0x24c);
    f4 = *(float *)(base + 0x248);
    f5 = *(float *)(base + 0x240);
    aiStack[0] = (int)(D_00203F1C * 59.998802f);
    piVar1 = aiStack;
    if (aiStack[0] >= 2) {
        piVar1 = aiStack + 1;
    }
    iVar2 = *piVar1;
    if (0 < iVar2) {
        do {
            fVar5 = (f5 - *pfVar4) * f4 - *pfVar3 * f3;
            *pfVar3 = fVar5;
            if (f2 < fVar5) {
                *pfVar3 = f2;
            } else if (fVar5 < -f2) {
                *pfVar3 = -f2;
            }
            iVar2 = iVar2 - 1;
            *pfVar4 = *pfVar4 + *pfVar3;
        } while (iVar2 != 0);
    }
}
