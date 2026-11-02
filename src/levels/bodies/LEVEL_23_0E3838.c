typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_0030297C[];
extern void func_0E33B0(Entry *entry);

void func_0E3838(unsigned int index) {
    func_0E33B0(&D_0030297C[index]);
}
