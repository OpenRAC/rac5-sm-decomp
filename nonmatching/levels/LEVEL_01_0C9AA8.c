/* LEVEL_01.REL:0x0C9AA8, bounded 192-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +6. Not linked into the accepted
 * gate or counted.
 * Reopen: The pinned cc1 merges `lui` pairs that the retail keeps distinct, one per global. Reopen with distinct address-takings that cannot be CSE'd.
 */
extern void *D_001F3FAC;
extern short D_00235240;
extern char D_00200CED;
extern int D_00200CE0;
extern int D_00200CE4;
extern char D_00200CDC;
extern int D_00201238;
extern char D_00200CEC;
extern void func_0C94C8(int a);
extern int func_133118(void);
extern void func_0C9AA0(void);

void func_0C9AA8(void)
{
    int state = *(int *)(*(char **)D_001F3FAC + 0x1C6C);

    if (state == 0x15 || state == 0xF) {
        func_0C94C8(0x18);
    } else if (state == 0x16 || (state == 0x17 && D_00235240 == 0xD)) {
        func_0C94C8(0x16);
    }
    D_00200CED = 0;
    D_00200CE0 = 0;
    D_00200CE4 = 0;
    D_00200CDC = 0;
    D_00201238 = func_133118();
    D_00200CEC = 1;
    func_0C9AA0();
}
