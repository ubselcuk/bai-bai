import tempfile, os #? sadece tempfile'nin nasıl kullanıldığını öğrenmeye çalıştım :)

file= tempfile.NamedTemporaryFile(mode='w+', suffix='.txt').name
with open(file, "w") as f:
    f.write("Hello World! from: %s\n" % file)

if os.name=='nt': os.system(f'type {file}')
else: os.system(f'cat {file}')