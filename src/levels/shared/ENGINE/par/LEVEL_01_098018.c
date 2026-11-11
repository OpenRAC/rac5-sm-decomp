/* LEVEL_01:0x098018 -- links a list of 0x2C-byte entries and terminates the last link. */
void func_098018(int *list)
{
    int entry;
    int end;
    int span;
    int *head;

    head = list;
    entry = head[3];
    span = head[4] * 0x2c - 0x2c;
    end = entry + span;
    while (entry != end) {
        *(int *)(entry + 0x24) = entry + 0x2c;
        entry = entry + 0x2c;
    }
    *(int *)(entry + 0x24) = 0;
    head[1] = (int)(head + 1);
    head[2] = (int)(head + 1);
    head[0] = head[3];
}
