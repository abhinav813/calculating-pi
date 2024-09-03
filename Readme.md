# Calculating &pi;
This is an implementation of a newly discovered formula by Saha and Sinha for the calculation of &pi;.

$$\pi=4+\sum_{n=1}^{\infty}\frac{1}{n!}\left(\frac{1}{n+\lambda}-\frac{4}{2n+1}\right)\left(\frac{\left(2n+1\right)^2}{4\left(n+\lambda\right)}-n\right)_{n-1}$$

Here, the expression $(a)_n$ is the so-called Pochhammer symbol, and corresponds to the product $a\times(a+1)\times(a+2)\times\dots\times(a+n-1)$.

The value of &pi; obtained was correct to 10 decimal digits when summing the first 30 terms with &lambda; = 10.

For more details on the formula, check the Scientific American article given in the references.

References: 
1. [Scientific American article](https://www.scientificamerican.com/article/string-theorists-accidentally-find-a-new-formula-for-pi/)
2. [Research paper](https://doi.org/10.1103/PhysRevLett.132.221601)
