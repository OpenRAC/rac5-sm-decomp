/* LEVEL_24:0x1442F0 -- placement copy of LEVEL_01_14DDA0.c: walks the object's record array and, for each active record, starts its follow-up (with 1 when the record's owner flag is set) then updates it. */
extern void func_076D68(char *object, int a1);
extern void func_144370(char *object);

void func_1442F0(char *object)
{
    char *rec;
    char *end;

    rec = *(char **)(object + 0xC);
    end = rec + *(int *)(object + 0x30) * 0x80;
    while (rec != end) {
        if (*(int *)(rec + 0x64) & 1) {
            if (*(int *)(*(char **)(rec + 0x58) + 0xA4) & 1) {
                func_076D68(rec, 1);
            }
            func_144370(rec);
        }
        rec += 0x80;
    }
}
