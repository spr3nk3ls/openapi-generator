# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OpenAPIPetstore.Model.Category do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"id",
    :"name"
  ]

  @type t :: %__MODULE__{
    :"id" => integer(),
    :"name" => String.t
  }
end

defimpl Poison.Decoder, for: OpenAPIPetstore.Model.Category do
  def decode(value, _options) do
    value
  end
end

