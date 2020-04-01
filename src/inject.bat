rm loader.bin

cp TEMPLATE.PTC RGRP000.PTC
make
python inject.py

pause