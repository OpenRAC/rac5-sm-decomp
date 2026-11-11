typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0037F83C[];
extern void func_0FB248(Entry *entry, float *pos);

void func_0FB378(unsigned int index, float *pos) {
    func_0FB248(&D_0037F83C[index], pos);
}
