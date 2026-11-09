/* LEVEL_01:0x0B9A10 -- placement copy of LEVEL_02_0C0320.c. */
struct Table {
    char **entries;
    unsigned int count;
};

int func_0B9A10(struct Table *table, unsigned int index,
                int value, unsigned int field)
{
    if (index >= table->count)
        return 0;
    {
      unsigned int field_index = field - 1U;
      char *entry;
      int *fields;
      if (field_index >= 4)
          return 0;
      entry = table->entries[index];
      fields = (int *)(entry + 0xd0);
      fields[field_index] = value;
    }
    return 1;
}
