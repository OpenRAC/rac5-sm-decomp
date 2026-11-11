"""Synthetic strict imported-call checks; no retail game bytes."""
from __future__ import annotations
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
import sys
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from import_guard import (ImportIdentityError,check_import_call_identity,
                          named_import_calls)
from rel import HEADER,MAGIC,RELOCATION,SYMBOL

ROW={'module':'LEVEL_01.REL','offset':0x2400,'size':80,
     'source':'src/levels/01_pokitaru/LEVEL_01_002400.c'}

def obj(name='cosf',at=12,kind=4,shndx=0):
    return {'symbols':[{'name':''},{'name':name,'shndx':shndx}],
            'relocs':[{'offset':at,'type':kind,'sym':1}]}

def module(duplicate=False):
    data=bytearray(0xC0)
    head=[0]*15;head[:5]=[MAGIC,0x40,2,0x58,2]
    data[:HEADER.size]=HEADER.pack(*head)
    data[0x40:0x4C]=RELOCATION.pack(0x100,4,0)
    data[0x4C:0x58]=RELOCATION.pack(0x100 if duplicate else 0x200,
                                   (0 if duplicate else 1)<<8|4,0)
    data[0x58:0x64]=SYMBOL.pack(0x70,0,0,0,0)
    data[0x64:0x70]=SYMBOL.pack(0x75,0x1234,0,0,0)
    data[0x70:0x7B]=b'cosf\0local\0'
    return bytes(data)

class RetailTests(unittest.TestCase):
    def test_named_import_only_and_body_offset(self):
        calls=named_import_calls(module())
        self.assertEqual(calls.sites,(0x100,))
        self.assertEqual(calls.within(0xF0,0x20),{0x10:'cosf'})
        self.assertEqual(calls.within(0x200,0x20),{})
    def test_duplicate_retail_import_site_fails(self):
        with self.assertRaises(ImportIdentityError):named_import_calls(module(True))

class StrictObjectTests(unittest.TestCase):
    def test_exact_named_import(self):
        self.assertEqual(check_import_call_identity(obj(),{12:'cosf'},ROW,{'cosf':0}),1)
    def test_wrong_name_or_wrong_address_fails(self):
        for candidate,values in ((obj('sinf'),{'sinf':0}),
                                 (obj(),{'cosf':0x100}),
                                 (obj(shndx=1),{'cosf':0})):
            with self.subTest(candidate=candidate,values=values):
                with self.assertRaises(ImportIdentityError):
                    check_import_call_identity(candidate,{12:'cosf'},ROW,values)
    def test_missing_wrong_kind_duplicate_fail(self):
        duplicate=obj();duplicate['relocs'].append(dict(duplicate['relocs'][0]))
        for candidate in ({'symbols':[],'relocs':[]},obj(kind=2),duplicate):
            with self.subTest(candidate=candidate):
                with self.assertRaises(ImportIdentityError):
                    check_import_call_identity(candidate,{12:'cosf'},ROW,{'cosf':0})
    def test_extra_zero_import_rejected_local_nonzero_passes(self):
        candidate=obj();candidate['symbols'].append({'name':'rand','shndx':0})
        candidate['relocs'].append({'offset':16,'type':4,'sym':2})
        with self.assertRaisesRegex(ImportIdentityError,'extra zero-address'):
            check_import_call_identity(candidate,{12:'cosf'},ROW,{'cosf':0,'rand':0})
        candidate['symbols'][2]['name']='func_00000100'
        self.assertEqual(check_import_call_identity(
            candidate,{12:'cosf'},ROW,{'cosf':0,'func_00000100':0x100}),1)
        self.assertEqual(check_import_call_identity(
            {'symbols':candidate['symbols'],'relocs':[candidate['relocs'][1]]},
            {},ROW,{'func_00000100':0x100}),0)
    def test_extra_zero_call_fails_when_retail_has_no_import(self):
        with self.assertRaisesRegex(ImportIdentityError,'extra zero-address'):
            check_import_call_identity(obj('rand'),{},ROW,{'rand':0})
    def test_shared_frontend_and_return_witnesses(self):
        shared={'module':'LEVEL_01.REL','offset':0x18800,'size':72,
                'source':'src/levels/shared/func_shared_zero_buffer.c'}
        count=0
        for _ in range(20):
            count+=check_import_call_identity(obj('memset',at=0x34),
                {0x34:'memset'},shared,{'memset':0,'level_data_a':0x1200})
        frontend={'module':'FRONTEND.REL','offset':0x2F80,'size':476,
                  'source':'src/levels/frontend/func_00002F80.c'}
        calls={'symbols':[{'name':''},{'name':'strncpy','shndx':0},
                          {'name':'memset','shndx':0},
                          {'name':'SND_GetGlobalMusicVolume__Fv','shndx':0}],
               'relocs':[{'offset':0x4C,'type':4,'sym':1},
                         {'offset':0x60,'type':4,'sym':2},
                         {'offset':0x74,'type':4,'sym':1},
                         {'offset':0xE4,'type':4,'sym':3}]}
        expected={0x4C:'strncpy',0x60:'memset',0x74:'strncpy',
                  0xE4:'SND_GetGlobalMusicVolume__Fv'}
        values={name:0 for name in expected.values()}
        count+=check_import_call_identity(calls,expected,frontend,values)
        self.assertEqual(count,24)
        calls['symbols'][1]['name']='wrong_strncpy'
        with self.assertRaises(ImportIdentityError):
            check_import_call_identity(calls,expected,frontend,
                                       {**values,'wrong_strncpy':0})
        return_one={'module':'LEVEL_01.REL','offset':0x100,'size':8,
                    'source':'src/levels/shared/func_00000100.c'}
        self.assertEqual(check_import_call_identity(
            {'symbols':[],'relocs':[]},{},return_one,{}),0)
    def test_parallel_reads_have_no_shared_mutation(self):
        candidate=obj();expected={12:'cosf'};values={'cosf':0}
        with ThreadPoolExecutor(max_workers=8) as pool:
            counts=list(pool.map(lambda _n:check_import_call_identity(
                candidate,expected,ROW,values),range(64)))
        self.assertEqual(counts,[1]*64)
        self.assertEqual(expected,{12:'cosf'})

if __name__=='__main__':unittest.main()
