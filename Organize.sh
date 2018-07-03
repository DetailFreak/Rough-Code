#!/bin/bash

mkdir Documents
mkdir Images
mkdir Audio
mkdir Programs
mkdir Videos

mv *.txt *.docx *.doc *.pdf *.xls *.docx *.html *.htm *.odt *.xlsx *.ppt *.pptx *.pages Documents\

echo "Documents cleaned..."

mv *.png *.jpg *.tiff *.gif *.bmp *.ppm *.pgm *.pbm *.pnm *.jpeg *.heif *.bpg *.img *.ico Images\

echo "Images cleaned..."

mv *.mp4 *.mkv *.webm *.flv *.vob *.ogv *.ogg *.drc *.gifv *.mng *.wmv *.mov *.qt *.avi *.yuv *.rm *.asf *.amv *.m4v *.m4p *.3gp Videos\

echo "Videos cleaned..."

mv *.wv *.wma	*.webm *.wav *.vox *.tta *.sln *.raw *.ra *.rm *.opus	*.ogg *.mogg *.nsf *.msv *.mpc *.mp3 *.mmf *.m4p *.m4b *.m4a *.ivs *.iklax *.gsm *.flac	*.dvf	*.dsf	*.awb	*.au *.ape *.amr *.aiff *.act	*.aax	*.aac *.aa *.8svx *.3gp Audio\

echo "Audio cleaned..."

mv *.cpp *.hpp *.h *.cc *.c *.py *.pl *.hs *.html *.css *.php *.js Programs\

echo "Programs cleaned..."

rmdir Documents
rmdir Images
rmdir Programs
rmdir Videos
rmdir Audio
