import os,sys

with open("loader.bin","rb") as f:
	payload=f.read()
	
with open("RGRP000.PTC","rb+") as f:
	grp=f.read()
	f.seek(len(grp)-len(payload))
	f.write(payload)
	
print("loader injected into GRP file")