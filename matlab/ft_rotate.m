f=zeros(30,30);
f(5:24,13:17)=1;
F=fft2(f,256,256);
F2=fftshift(F);
F3=log(1+abs(F2));
subplot(2,2,1);
imshow(f);
title('ԭͼ');
subplot(2,2,2);
imshow(F3);
title('����Ҷ');
f1= imrotate(f,90);
F1=fft2(f1,256,256);
F21=fftshift(F1);
F31=log(1+abs(F21));
subplot(2,2,3);
imshow(f1);
title('ԭͼ��ת');
subplot(2,2,4);
imshow(F31);
title('����Ҷ��ת');