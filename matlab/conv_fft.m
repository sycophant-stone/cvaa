A = [1 2 3; 4 5 6; 7 8 9];
B = ones(3);
A(8,8) = 0;%����
B(8,8) = 0; %����
C = ifft2(fft2(A).*fft2(B));
C = C(1:5,1:5);
C = real(C)