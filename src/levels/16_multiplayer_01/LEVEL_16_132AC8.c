/* LEVEL_16:0x132AC8 -- placement copy of LEVEL_01_14DDA0.c: walks the object's record array and, for each active record, starts its follow-up (with 1 when the record's owner flag is set) then updates it. */
extern void func_06F940(char *object, int a1);
extern void func_132B48(char *object);

void func_132AC8(char *object)
{
    char *rec;
    char *end;

    rec = *(char **)(object + 0xC);
    end = rec + *(int *)(object + 0x30) * 0x80;
    while (rec != end) {
        if (*(int *)(rec + 0x64) & 1) {
            if (*(int *)(*(char **)(rec + 0x58) + 0xA4) & 1) {
                func_06F940(rec, 1);
            }
            func_132B48(rec);
        }
        rec += 0x80;
    }
}
