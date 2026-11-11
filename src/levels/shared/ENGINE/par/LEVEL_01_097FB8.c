/* LEVEL_01:0x097FB8 -- links a counted 140-byte entry chain into a list header. */
void func_097FB8(int *list)
{
    int entry;
    int end;
    int span;
    int *head;

    head = list;
    entry = head[3];
    span = head[4] * 0x8c - 0x8c;
    end = entry + span;
    while (entry != end) {
        *(int *)(entry + 0x84) = entry + 0x8c;
        entry = entry + 0x8c;
    }
    *(int *)(entry + 0x84) = 0;
    head[1] = (int)(head + 1);
    head[2] = (int)(head + 1);
    head[0] = head[3];
}
