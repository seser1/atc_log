main = do
    x <- readLn :: IO Int
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    print $ x - (a + b * ((x-a) `div` b))