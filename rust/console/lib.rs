// TODO: print the list of arguments insteadof invoking the formatter
#[macro_export]
macro_rules! log {
    ($($arg:tt)*) => {
        println!($($arg)*)
    };
}
