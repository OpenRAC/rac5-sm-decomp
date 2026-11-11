struct lvl_stack { int items[8]; int count; };

int func_push_entry(struct lvl_stack *record, int value)
{
    int count = record->count;

    if ((count ^ 8) == 0)
        return 0;
    record->items[count] = value;
    record->count = count + 1;
    return 1;
}
