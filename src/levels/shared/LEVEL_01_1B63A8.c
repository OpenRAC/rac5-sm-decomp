struct Table { char pad[0x68]; int values[5]; };
struct Owner { char pad[0x58]; struct Table *table; };
void func_1B63A8(struct Owner *owner, int value, unsigned int index)
{
    struct Table *table = owner->table;
    if (index < 5)
        table->values[index] = value;
}
