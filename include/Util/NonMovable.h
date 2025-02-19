#ifndef NON_MOVE
#define NON_MOVE 1

/// @brief Class that identifies entities not designed for physical movement.
/// Used for Singletons.
class NonMovable {
  public:
    NonMovable(NonMovable &&) = delete;

    NonMovable &operator=(NonMovable &&) = delete;

  protected:
    NonMovable() = default;
};

#endif // NON_MOVE
