# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OpenAPIPetstore.Model.Client do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"client"
  ]

  @type t :: %__MODULE__{
    :"client" => String.t
  }
end

defimpl Poison.Decoder, for: OpenAPIPetstore.Model.Client do
  def decode(value, _options) do
    value
  end
end

