for (int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            cnt[a[i]]++;
        }
    }

    printf("%d", cnt[0]);