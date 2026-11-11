typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0034ADBC[];
extern void func_0F6D38(Entry *entry, float *pos);

void func_0F6E68(unsigned int index, float *pos) {
    func_0F6D38(&D_0034ADBC[index], pos);
}
