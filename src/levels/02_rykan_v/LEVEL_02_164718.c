/* LEVEL_02:0x164718 -- releases the record held in a nested object's field and clears the field. */
extern void func_087408(char *record);

void func_164718(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x10);

    if (value != 0) {
        func_087408(value);
        *(int *)(nested + 0x10) = 0;
    }
}
