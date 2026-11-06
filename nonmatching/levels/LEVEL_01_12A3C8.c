/* LEVEL_01.REL:0x12A3C8, bounded 176-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +132. Not linked into the accepted
 * gate or counted.
 * Reopen: The size is exact but the retail leaves $v0 as the func_129F40 result on the short branch. Reopen by writing the return as a short-circuit ||.
 */
extern char *sprintf(char *buffer, const char *format, ...);
extern int func_129D88(char *a, char *b, int *c);
extern int func_129F40(char *a);
extern void *GetBufferCachePtr__Fv(void);

extern int D_0021A7F0;
extern char D_00217FF8[];
extern char D_00218010[];
extern char D_00206E8C[];

int func_0012A3C8(void)
{
    char auStack_70[32];
    char auStack_50[32];
    int local40;
    int local44;
    int lVar2;
    int lVar3;

    sprintf(auStack_70, D_00217FF8, D_0021A7F0);
    sprintf(auStack_50, D_00218010, D_0021A7F0);
    lVar2 = func_129D88(auStack_70, D_00206E8C, 0);
    lVar3 = (int)GetBufferCachePtr__Fv();
    local44 = lVar3;
    if (lVar3 == 0) {
        return 0;
    }
    if (!(0x1A8FFF < (unsigned int)func_129F40(auStack_50))) {
        func_129D88(auStack_50, (char *)&local40, &local44);
    }
    return lVar2 != 0;
}
